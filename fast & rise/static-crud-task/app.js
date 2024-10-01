let records = [];

function addRecord() {
    const name = document.getElementById('name').value;
    const age = document.getElementById('age').value;

    if (name && age) {
        records.push({ name, age });
        displayRecords();
        clearForm();
    } else {
        alert('Please enter both name and age');
    }
}

function displayRecords() {
    const tableBody = document.getElementById('crud-table');
    tableBody.innerHTML = '';

    records.forEach((record, index) => {
        tableBody.innerHTML += `
            <tr>
                <td>${record.name}</td>
                <td>${record.age}</td>
                <td>
                    <button onclick="editRecord(${index})">Edit</button>
                    <button onclick="deleteRecord(${index})">Delete</button>
                </td>
            </tr>
        `;
    });
}

function editRecord(index) {
    const record = records[index];
    document.getElementById('name').value = record.name;
    document.getElementById('age').value = record.age;
    records.splice(index, 1);
}

function deleteRecord(index) {
    records.splice(index, 1);
    displayRecords();
}

function clearForm() {
    document.getElementById('name').value = '';
    document.getElementById('age').value = '';
}
