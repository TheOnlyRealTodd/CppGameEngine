Vector2D operator+(const Vector2D& left, const Vector2D& right)
{
	return Vector2D(left.x + right.x, left.y + right.y);
}

Vector2D operator*(float scaler, const Vector2D& vector) {
	return Vector2D(scaler * vector.x, scaler * vector.y);
}
// Will use the above custom defined * operator in the below function
Vector2D operator*(const Vector2D& vector, float scaler) {
	return scaler * vector;
}