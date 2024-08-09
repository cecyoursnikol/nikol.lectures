import React, { useState } from 'react';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import AddStudent from './components/AddStudent';
import EditStudent from './components/EditStudent';
import StudentList from './components/StudentList';
import HomePage from './pages/HomePage';

const App = () => {
  const [students, setStudents] = useState([]);

  const addStudent = (student) => {
    setStudents([...students, student]);
  };

  const updateStudent = (index, updatedStudent) => {
    const newStudents = [...students];
    newStudents[index] = updatedStudent;
    setStudents(newStudents);
  };

  const deleteStudent = (student) => {
    setStudents(students.filter((s) => s !== student));
  };

  return (
    <Router>
      <div className="container">
        <Routes>
          <Route path="/" element={<HomePage />} />
          <Route path="/add" element={<AddStudent addStudent={addStudent} />} />
          <Route path="/edit/:id" element={<EditStudent students={students} updateStudent={updateStudent} />} />
          <Route path="/list" element={<StudentList students={students} deleteStudent={deleteStudent} />} />
        </Routes>
      </div>
    </Router>
  );
};

export default App;
