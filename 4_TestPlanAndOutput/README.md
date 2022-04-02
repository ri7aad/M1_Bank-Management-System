
# TEST PLAN:

## High level test plan

| **Test ID** | **Description**| **Exp I/P** | **Exp O/P** | **Actual O/P** |**Status**  |    
|---------------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HL 01       |New account opening| Name:XYZABC   Account Number:000000000 Initial Deposit:500|Your account has been created.|Your account has been created.|Pass |
|  HL 02       |Deposit Amount|500 |Your current available bank balance is 1000|Your current available bank balance is 1000|Pass|
|  HL 03       |withdraw Amount|3000| Sorry, You dont have enough credit left in your account| Sorry, You dont have enough credit left in your account| Pass  |
|  HL 04       |Entering Password| abcdef|Wrong Password|Wrong Password|Pass   |
|  HL 05       |Entering Password| project|password match|password match|Pass    |

## Low level test plan

| **Test ID** | **Description**| **Exp Input** | **Exp Output** | **Actual Output** |**Status**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  LL 01       |If user enters wrong Account Number | 155515555| Wrong account number| Wrong account number|Pass |
|  LL 02       |If wrong choice choosen| 1|Invalid choice|Exit|Pass |

