# Facts about variables

* Variables have to be "declared", but only once
* Variables have types
  - Integers have type `int`
  - Decimals have type `double`
  - Strings have type `string`
  - Types don't change
* Variables have unique "identifiers"
  - Identifiers have to begin with a letter
  - `dog_3_name` is OK, `3dog_name` is bad
* Variables can be "assigned":

        string dog_name = "Fido";

* Or they can be set via `cin`:

        string dog_name;
        cin >> dog_name;

* Variables can be used in expressions:

        pet_list = dog_name + fish_name;
