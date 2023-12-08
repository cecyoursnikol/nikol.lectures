var selectedRow = null

function onFormSubmit() {
    if (validate()) {
        var formData = readFormData();
        if (selectedRow == null) {
            insertNewRecord(formData);
        }
    }
}

function readFormData() {
    var formData = {};
    formData['fullName'] = document.getElementById('fullName').value;
    formData['email'] = document.getElementById('email').value;
    formData['salary'] = document.getElementById('salary').value;
    formData['city'] = document.getElementById('city').value;
    return formData;
}


function validate() {
    isValid = true;
    if (document.getElementById('fullName').value == "") {
        isValid = false;
        document.getElementById('fullNameValidationError').classList.remove('hide');
    }
    else {
        isValid = true;
        if (!document.getElementById('fullNameValidationError').classList.contains('hide')) {
            document.getElementById("fullNameValidationError").classList.add('hide');
        }
    }
    return isValid;
}