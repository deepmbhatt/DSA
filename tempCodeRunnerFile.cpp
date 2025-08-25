int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }