# Test Plan and Test Output

| Test ID | HLT ID |        Description            | Exp IN | Exp OUT | Actual Out | Pass/Fail |
| ------- | ------ | ----------------------------- | ------ | ------- | ---------- | --------- |
|   T_01  |  H_01  | `Provide required detail for login to book a ticket` | Password | Successfully Logined In | Successfully Logined In | `Pass` |
|   T_02  |  H_01  | `When wrong password is entered` | Password | Entered password is wrong | Entered password is wrong | `Pass` |
|   T_03  |  H_02  | `Display the details of movie available` | Enter choice | Display list | Display list | `Pass` |
|   T_04  |  H_02  | `Purchase a ticket for the movie available` | Enter choice | Thankyou for Booking Ticket | Thankyou for Booking Ticket | `Pass` |
|   T_05  |  H_03  | `Summary of a ticket for purchased movie` | Enter choice | Booking ID, Customer Name,Show Name, Hall No, Price | Booking ID, Customer Name,Show Name, Hall No, Price | `Pass` |
|   T_06  |  H_03  | `Change the price of ticket` | Password | Please enter new price | Please enter new price | `Pass` | 
|   T_07  |  H_03  | `Change the price of ticket after login` | Enter new price | Price updated Successfully | Price updated Successfully | `Pass` |
|   T_08  |  H_03  | `When wrong password is entered while changing the price of ticket` | Password | Entered password is wrong | Entered Password is wrong | `Pass` |
|   T_09  |  H_04  | `Cancel a Ticket` | ID number | Your Ticket is canceled | Your Ticket is canceled | `Pass` |
|   T_10  |  H_05  | `To view the reserved ticket` | Password | Summary of Ticket | Summary of Ticket | `Pass` |
|   T_11  |  H_05  | `When wrong password is entered to view the reserved ticket` | Correct Password | Entered password is wrong | Entered Password is wrong | `Pass` |
