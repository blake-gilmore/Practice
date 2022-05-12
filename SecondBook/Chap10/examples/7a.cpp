void bagType::set(string setStyle, double setL, double setW, double setH, double setPrice)
{
    style = setStyle;
    l = setL;
    w = setW;
    h = setH;
    price = setPrice;
    return;
}

void bagType::print() const
{
    cout << "Style: " << style << endl
         << "Length: " << l << endl
         << "Width: " << w << endl
         << "Height: " << h << endl 
         << "Price: " << price << endl;
    return;         
}

bagType::bagType()
{
    set("", 0.0, 0.0, 0.0, 0.0);
    return;
}

newBag.print();
bagType tempBag("backPack", 15, 8, 20, 49.99);