void count_prime(int n) {

    if(n < 0) {

        cout << "Error.";

    } else if(n == 0 || n == 1) {

        cout << 0;

    }

    vector<int> my_list = {0, 0};

    for(int i = 2; i <= n; i++) {

        my_list.push_back(1);

    }

    for(int i = 2; i <= n; i++) {

        if(my_list[i] == 1) {

            for(int j = 2; j*i <= n; j++) {

                my_list[i*j] = 0;

            }

        }

    }

    int prime = 0;

    for(int i = 0; i <= n; i++) {

        if(my_list[i] == 1) {

            cout << i << " ";
            prime++;

        }

    }

    cout << "\n" << prime;

}