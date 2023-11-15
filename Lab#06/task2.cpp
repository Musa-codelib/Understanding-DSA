#include <iostream>
using namespace std;

const int MAX_PRODUCTS = 100;

struct Product {
    string name;
    int id;
    int quantity;
    double price;
};

void merge(Product arr[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    Product leftArr[n1];
    Product rightArr[n2];

    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[left + i];

    for (int j = 0; j < n2; ++j)
        rightArr[j] = arr[middle + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i].quantity <= rightArr[j].quantity) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) 
    {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < n2) 
    {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSort(Product arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

int main() 
{
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    Product products[MAX_PRODUCTS];

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for product " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> products[i].name;
        cout << "ID: ";
        cin >> products[i].id;
        cout << "Price: ";
        cin >> products[i].price;
        cout << "Quantity: ";
        cin >> products[i].quantity;
    }

    mergeSort(products, 0, n - 1);

    cout << "\nSorted list of products based on ID:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Name: " << products[i].name << ", ID: " << products[i].id
                  << ", Price: " << products[i].price << ", Quantity: " << products[i].quantity << "\n";
    }

    return 0;
}