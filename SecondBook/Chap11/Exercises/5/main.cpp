#include "extPersonType.h"

int main()
{
    extPersonType newPerson;
    newPerson.printInformation();
    newPerson.setAddress("1317 Cornet Street");
    newPerson.setCity("Henderson");
    newPerson.setState("Nevada");
    newPerson.setZipCode("89012");
    newPerson.setName("Blake", "Gilmore");
    newPerson.setDate(2,29,1996);
    newPerson.setType("Family Member");
    newPerson.setPhoneNumber("702-498-5066");

    newPerson.printInformation();
    return 0;
}