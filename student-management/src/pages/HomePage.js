import React from 'react';
import { Link } from 'react-router-dom';
import { Container, Row, Col, Card, Button } from 'react-bootstrap';
import './HomePage.css'; // Import custom CSS for additional styling

const HomePage = () => {
  return (
    <Container fluid className="home-container d-flex align-items-center justify-content-center min-vh-100">
      <Row className="w-100">
        <Col md={{ span: 8, offset: 2 }} lg={{ span: 6, offset: 3 }}>
          <Card className="home-card shadow-lg">
            <Card.Body className="text-center">
              <Card.Title as="h2" className="my-4 home-title">Welcome to the Student Management System</Card.Title>
              <Card.Text className="mb-4 home-text">
                Manage your students with ease. Add, edit, and view student details all in one place.
              </Card.Text>
              <div className="d-grid gap-2 d-md-flex justify-content-md-center">
                <Link to="/add">
                  <Button variant="primary" size="lg" className="me-md-2 home-button">Add New Student</Button>
                </Link>
                <Link to="/list">
                  <Button variant="secondary" size="lg" className="home-button">View Student List</Button>
                </Link>
              </div>
            </Card.Body>
            <Card.Footer className="text-muted text-center py-3 home-footer">
              © 2024 Student Management System By: Rudra Rajput
            </Card.Footer>
          </Card>
        </Col>
      </Row>
    </Container>
  );
};

export default HomePage;
