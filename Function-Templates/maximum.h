#ifndef MAXIMUM_H_INCLUDED
#define MAXIMUM_H_INCLUDED

template <typename T>
T maximum( T type1, T type2, T type3)
{
    T maximumValue=type1;
    if (maximumValue<type2)
        maximumValue=type2;
    else if (maximumValue<type3)
        maximumValue=type3;
    else{}

    return maximumValue;
}


#endif // MAXIMUM_H_INCLUDED
