<p align="center">
  <img src="https://cdn-icons-png.flaticon.com/512/6295/6295417.png" width="100" />
</p>
<p align="center">
    <h1 align="center">RAILWAY-RESERVATION-SYSTEM-WITH-INDEX-BASED-BERTH-MANAGEMENT-AND-RAC-TICKET-HANDLING</h1>
</p>
<p align="center">
	<img src="https://img.shields.io/github/license/vp81vishnu/Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling?style=flat&color=0080ff" alt="license">
	<img src="https://img.shields.io/github/last-commit/vp81vishnu/Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling?style=flat&logo=git&logoColor=white&color=0080ff" alt="last-commit">
	<img src="https://img.shields.io/github/languages/top/vp81vishnu/Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling?style=flat&color=0080ff" alt="repo-top-language">
	<img src="https://img.shields.io/github/languages/count/vp81vishnu/Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling?style=flat&color=0080ff" alt="repo-language-count">
<p>

<hr>


A simple Railway Reservation System implemented in C++ that manages booking and cancellation of train berths with an index-based approach. This system also handles Waiting List and Reservation Against Cancellation (RAC) tickets.

## Features:


- **Booking Tickets**: Users can book tickets for Upper, Lower, or Middle berths.
- **Waiting List**: When all regular berths are full, users are added to the RAC ticket list.
- **RAC Handling**: RAC tickets are moved to regular berths when available.
- **Cancellation**: Users can cancel their tickets and automatically handle RAC tickets if needed.
- **View and Print Tickets**: Display available berths, booked tickets, and RAC tickets.


## 📂 Repository Structure

```sh
└── Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling/
    ├── Berth.h
    ├── Book.cpp
    ├── Book.h
    ├── README.md
    ├── RailWay console.cbp
    ├── RailWay console.depend
    ├── RailWay console.layout
    ├── User.cpp
    ├── User.h
    ├── cancel.cpp
    ├── cancel.h
    └── main.cpp
```


---

## 🚀 Getting Started

***Requirements***

Ensure you have the following dependencies installed on your system:

* **CPP**: `version x.y.z`

### ⚙️ Installation

1. Clone the Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling repository:

```sh
git clone https://github.com/vp81vishnu/Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling
```

2. Change to the project directory:

```sh
cd Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling
```

3. Install the dependencies:

```sh
g++ -o myapp main.cpp
```

### 🤖 Running Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling

Use the following command to run Railway-Reservation-System-with-Index-Based-Berth-Management-and-RAC-Ticket-Handling:

```sh
./myapp
```

### 🧪 Tests

To execute tests, run:

```sh
googletest
```

---

Acknowledgments:




Inspired by real-world railway reservation systems.
Special thanks to the open-source community for providing the tools and resources used in this project.


