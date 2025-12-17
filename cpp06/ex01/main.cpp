#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
    Data originalData;
    originalData.number = 42;
    originalData.text = "Hello, World!";
    
    // Serialize the Data object
    uintptr_t serializedData = Serializer::serialize(&originalData);
    std::cout << "originalData Address: " << &originalData << std::endl
        << std::endl;;
    
    // Deserialize the uintptr_t back to a Data pointer
    Data* deserializedData = Serializer::deserialize(serializedData);
    std::cout << "Deserialized Address: " << deserializedData << std::endl
        << std::endl;
    
    // Verify that the deserialized Data pointer points to the original Data object
    if (deserializedData == &originalData)
    {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Number: " << deserializedData->number << std::endl;
        std::cout << "Text: " << deserializedData->text << std::endl;
    } else
        std::cout << "Serialization and deserialization failed!" << std::endl;
    
    return (0);
}
