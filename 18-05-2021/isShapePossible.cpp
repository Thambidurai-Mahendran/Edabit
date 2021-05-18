/*Examples
isShapePossible(4, [90, 90, 90, 90]) ? true

isShapePossible(3, [20, 20, 140]) ? true

isShapePossible(1, [21]) ? false
// n must be larger than 2

isShapePossible(5, [500, 0, 20, 10, 10]) ? false
// You can't have an interior angle bigger than 180°
// You can't have an interior angle lower than 0° or equal to 0°*/
bool isShapePossible(int n, std::vector<int> angles) {
	if (n < 3)
		return false;
	int count = 0;
	for (int i = 0; i < angles.size(); i++) {
		/*angles must be equals or under 180° and over 0°.*/
		if (angles[i]>180||angles[i]<1) 
			return false;
		count += angles[i];
	}
	if(count == (n - 2)*180)
		return true;
	else return false;
}
