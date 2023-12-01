#include <iostream>

int main() {
	std::string string_text = "Hello world!!";
	int size_string_text = string_text.length();
	char container_sign_array_string[13] = {0};
	int array_number_count_string_text[13];
	char sort_sign_array_string[10];

	std::cout << string_text << std::endl;

	for (int i = 0;i < size_string_text;i++) {
		container_sign_array_string[i] = string_text[i];
	}

	int index_sign_array_string_left_operand = 0, index_sign_array_string_right_operand = 0, index_sort_sing_string_text = 0;
	int counter_number_sing_string_text = 0;
	bool boolean_while_sort_char = true;

	sort_sign_array_string[index_sort_sing_string_text] = container_sign_array_string[0];
	int start_counter_number_sing_string_text = 1;

	while (boolean_while_sort_char) {

		if (size_string_text == index_sign_array_string_right_operand) {
			int i = 0;
			index_sign_array_string_left_operand++;

			while (size_string_text > i) {
				if (container_sign_array_string[index_sign_array_string_left_operand] == sort_sign_array_string[i]) {
					start_counter_number_sing_string_text = 0;
					break;
				}
				i++;
			}
			if (i == size_string_text) {
				start_counter_number_sing_string_text = 1;
				index_sort_sing_string_text++;
				sort_sign_array_string[index_sort_sing_string_text] = container_sign_array_string[index_sign_array_string_left_operand];
			}
			counter_number_sing_string_text = 0;
			index_sign_array_string_right_operand = 0;
		}
		if (start_counter_number_sing_string_text == 1 && container_sign_array_string[index_sign_array_string_left_operand] == container_sign_array_string[index_sign_array_string_right_operand]) {
			counter_number_sing_string_text++;
			array_number_count_string_text[index_sort_sing_string_text] = counter_number_sing_string_text;
		}

		index_sign_array_string_right_operand++;

		if (index_sign_array_string_left_operand == size_string_text) {
			boolean_while_sort_char = false;
		}
	}

	int sort_max_string_text = 0;
	char sort_sing_descending_string_text[10] = {0};
	int sort_descending_number_string_text[10] = { 0 };
	int container_array_number_count_string_text[10] = { 0 };

	boolean_while_sort_char = true;

	int index_sort_descending_number_string_text = 0;

	for (int i = 0;i < index_sort_sing_string_text;i++) {
		container_array_number_count_string_text[i] = array_number_count_string_text[i];
	}

	while (boolean_while_sort_char)
	{
		for (int i = 0;i < index_sort_sing_string_text;i++) {
			if (array_number_count_string_text[i] >= sort_max_string_text) {
				sort_max_string_text = array_number_count_string_text[i];
			}
		}

		sort_descending_number_string_text[index_sort_descending_number_string_text] = sort_max_string_text;

		for (int i = 0;i < index_sort_sing_string_text;i++) {
			if (array_number_count_string_text[i] == sort_max_string_text) {
				array_number_count_string_text[i] = 0;
				break;
			}
		}

		sort_max_string_text = 0;
		index_sort_descending_number_string_text++;

		if (index_sort_descending_number_string_text == index_sort_sing_string_text) {
			boolean_while_sort_char = false;
		}
	}

	boolean_while_sort_char = true;
	int index_sort_descending_sing_string_text = 0;
	index_sign_array_string_left_operand = 0;
	index_sign_array_string_right_operand = 0;

	while (boolean_while_sort_char) {
		if (index_sign_array_string_right_operand == index_sort_sing_string_text) {
			index_sign_array_string_right_operand = 0;
			index_sign_array_string_left_operand++;
		}
		if (sort_descending_number_string_text[index_sign_array_string_left_operand] == container_array_number_count_string_text[index_sign_array_string_right_operand]) {
			sort_sing_descending_string_text[index_sort_descending_sing_string_text] = sort_sign_array_string[index_sign_array_string_right_operand];
			index_sort_descending_sing_string_text++;
		}
		index_sign_array_string_right_operand++;
		if (index_sign_array_string_left_operand == index_sort_sing_string_text) {
			for (int i = 0;i < index_sort_sing_string_text;i++) {
				std::cout << sort_sing_descending_string_text[i] << " " << sort_descending_number_string_text[i] << std::endl;
			}
			boolean_while_sort_char = false;
		}
	}
	return 0;
}