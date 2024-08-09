import React, { useState } from 'react';
import { useParams, useNavigate } from 'react-router-dom';

const EditStudent = ({ students, updateStudent }) => {
  const { id } = useParams();
  const student = students[id];
  const [name, setName] = useState(student.name);
  const [age, setAge] = useState(student.age);
  const [grade, setGrade] = useState(student.grade);
  const navigate = useNavigate();

  const handleSubmit = (e) => {
    e.preventDefault();
    updateStudent(id, { name, age, grade });
    navigate('/list');
  };

  return (
    <div>
      <h2>Edit Student</h2>
      <form onSubmit={handleSubmit}>
        <div className="form-group">
          <label>Name</label>
          <input
            type="text"
            className="form-control"
            value={name}
            onChange={(e) => setName(e.target.value)}
          />
        </div>
        <div className="form-group">
          <label>Age</label>
          <input
            type="number"
            className="form-control"
            value={age}
            onChange={(e) => setAge(e.target.value)}
          />
        </div>
        <div className="form-group">
          <label>Grade</label>
          <input
            type="text"
            className="form-control"
            value={grade}
            onChange={(e) => setGrade(e.target.value)}
          />
        </div>
        <button type="submit" className="btn btn-primary">Save</button>
      </form>
    </div>
  );
};

export default EditStudent;
