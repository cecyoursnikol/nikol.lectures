import React, { useState } from 'react';
import { useNavigate } from 'react-router-dom';
import { Container, Row, Col, Form, Button, Card } from 'react-bootstrap';
import './AddStudent.css'; // Import custom CSS for additional styling

const AddStudent = ({ addStudent }) => {
  const [name, setName] = useState('');
  const [age, setAge] = useState('');
  const [grade, setGrade] = useState('');
  const navigate = useNavigate();

  const handleSubmit = (e) => {
    e.preventDefault();
    const newStudent = { name, age, grade };
    addStudent(newStudent);
    navigate('/list');
  };

  return (
    <Container fluid className="add-student-container d-flex align-items-center justify-content-center min-vh-100">
      <Row className="w-100">
        <Col md={{ span: 8, offset: 2 }} lg={{ span: 6, offset: 3 }}>
          <Card className="add-student-card shadow-lg">
            <Card.Body>
              <Card.Title as="h2" className="text-center mb-4">Add New Student</Card.Title>
              <Form onSubmit={handleSubmit}>
                <Form.Group controlId="formName" className="mb-3">
                  <Form.Label>Name</Form.Label>
                  <Form.Control 
                    type="text" 
                    placeholder="Enter student name" 
                    value={name} 
                    onChange={(e) => setName(e.target.value)} 
                    required 
                  />
                </Form.Group>

                <Form.Group controlId="formAge" className="mb-3">
                  <Form.Label>Age</Form.Label>
                  <Form.Control 
                    type="number" 
                    placeholder="Enter student age" 
                    value={age} 
                    onChange={(e) => setAge(e.target.value)} 
                    required 
                  />
                </Form.Group>

                <Form.Group controlId="formGrade" className="mb-3">
                  <Form.Label>Grade</Form.Label>
                  <Form.Control 
                    type="text" 
                    placeholder="Enter student grade" 
                    value={grade} 
                    onChange={(e) => setGrade(e.target.value)} 
                    required 
                  />
                </Form.Group>

                <div className="d-grid gap-2 d-md-flex justify-content-md-center">
                  <Button variant="primary" type="submit" size="lg" className="me-md-2">Add Student</Button>
                  <Button variant="secondary" size="lg" onClick={() => navigate('/list')}>Cancel</Button>
                </div>
              </Form>
            </Card.Body>
          </Card>
        </Col>
      </Row>
    </Container>
  );
};

export default AddStudent;
