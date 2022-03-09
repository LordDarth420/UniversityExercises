class Travel:
    def __init__(self, ID, destination, flight, price):
        self.ID = ID
        self.Destination = destination
        self.Flight = flight
        self.Price = price
    def Reduce(self):
        if self.Price > 200:
            self.Price -= 0.1 * self.Price
    def Print(self):
        print(f"{self.ID}-{self.Destination}-{self.Flight}-{self.Price}")

travel1 = Travel("2141", "Sofia", "Flight1", 2345)
travel1.Print()
travel1.Reduce()
travel1.Print()
