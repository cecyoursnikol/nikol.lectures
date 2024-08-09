import React, { useState } from 'react';
import { Link, useNavigate } from 'react-router-dom';
import { Modal, Button, Table } from 'react-bootstrap';
import DeleteConfirmation from './DeleteConfirmation';

const StudentList = ({ students, deleteStudent }) => {
  const [showModal, setShowModal] = useState(false);
  const [studentToDelete, setStudentToDelete] = useState(null);
  const navigate = useNavigate();

  const handleDelete = (student) => {
    setStudentToDelete(student);
    setShowModal(true);
  };

  return (
    <div>
      <h2 className="my-4">Student List</h2>
      <Button 
        variant="secondary" 
        className="mb-3" 
        onClick={() => navigate('/')}
      >
        Go to Home
      </Button>
      <Button 
        variant="primary" 
        className="mb-3 ms-2" 
        onClick={() => navigate('/add')}
      >
        Add New Student
      </Button>
      <Table striped bordered hover responsive>
        <thead>
          <tr>
            <th>Name</th>
            <th>Age</th>
            <th>Grade</th>
            <th>Actions</th>
          </tr>
        </thead>
        <tbody>
          {students.length > 0 ? (
            students.map((student, index) => (
              <tr key={index}>
                <td>{student.name}</td>
                <td>{student.age}</td>
                <td>{student.grade}</td>
                <td>
                  <Link to={`/edit/${index}`} className="btn btn-warning btn-sm me-2">Edit</Link>
                  <Button variant="danger" size="sm" onClick={() => handleDelete(student)}>Delete</Button>
                </td>
              </tr>
            ))
          ) : (
            <tr>
              <td colSpan="4" className="text-center">No students found</td>
            </tr>
          )}
        </tbody>
      </Table>

      {showModal && (
        <DeleteConfirmation 
          show={showModal} 
          onHide={() => setShowModal(false)} 
          onConfirm={() => {
            deleteStudent(studentToDelete);
            setShowModal(false);
          }} 
        />
      )}
    </div>
  );
};

export default StudentList;
