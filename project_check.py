class StarCinema:
    _hall_list = []  # Class attribute to store instances of Hall

    def entry_hall(self, hall_instance):
        """Method to insert an object of class Hall into hall_list."""
        self._hall_list.append(hall_instance)


class Hall(StarCinema):
    def __init__(self, rows: int, cols: int, hall_no: int):
        """
        Constructor to initialize Hall object with rows, cols, and hall_no.
        It also inserts the object into the StarCinema class attribute hall_list.
        """
        self._seats = {}        # Dictionary to store seats information
        self._show_list = []    # List to store tuples of show information
        self._rows = rows        # Number of rows in the hall
        self._cols = cols        # Number of columns in the hall
        self._hall_no = hall_no  # Unique hall number
        super().entry_hall(self)  # Call entry_hall method of superclass to insert into hall_list

    def entry_show(self, show_id: str, movie_name: str, time: str):
        """
        Method to add a show to the hall with the given show_id, movie_name, and time.
        It also allocates seats using a 2D list and stores the information in the seats attribute.
        """
        show_tuple = (show_id, movie_name, time)
        self._show_list.append(show_tuple)
        self._seats[show_id] = [[0] * self._cols for _ in range(self._rows)]

    def book_seats(self, show_id: str, seats_to_book: list):
        """
        Method to book seats for a show using the provided show_id and seat coordinates.
        It checks if the show_id is valid and then books the seats.
        """
        if show_id not in self._seats:
            raise ValueError("Invalid show ID")

        for seat in seats_to_book:
            row, col = seat
            if not (0 <= row < self._rows and 0 <= col < self._cols):
                raise ValueError("Invalid seat coordinates")

            if self._seats[show_id][row][col] == 1:
                raise ValueError("Seat already booked")

            self._seats[show_id][row][col] = 1

    def view_show_list(self):
        """Method to view all the shows running in the hall."""
        print("Shows running:")
        for show in self._show_list:
            print(f"Show ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")

    def view_available_seats(self, show_id: str):
        """
        Method to view available seats for a show using the provided show_id.
        It checks if the show_id is valid and then displays the available seats.
        """
        if show_id not in self._seats:
            raise ValueError("Invalid show ID")

        print(f"Available seats for show {show_id}:")
        for i in range(self._rows):
            for j in range(self._cols):
                status = 'Booked' if self._seats[show_id][i][j] == 1 else 'Available'
                print(f"Row {i + 1}, Col {j + 1}: {status}")


# Replica System
try:
    hall11 = Hall(rows=3, cols=4, hall_no=1)
    hall11.entry_show("S1", "Movie1", "12:00 PM")
    hall11.entry_show("S2", "Movie2", "3:00 PM")

    hall11.view_show_list()

    hall11.book_seats("S1", [(0, 1), (1, 2), (2, 3)])
    hall11.view_available_seats("S1")
except ValueError as e:
    print(f"Error: {e}")
