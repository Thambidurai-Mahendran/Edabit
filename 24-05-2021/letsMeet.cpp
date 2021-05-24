/*
From point A, an object is moving towards point B at constant velocity va (in km/hr). From point B, another object is moving towards point A at constant velocity vb (in km/hr). Knowing this and the distance between point A and B (in km), write a function that returns how much time passes until both objects meet.

Format the output like this:

"2h 23min 34s"
Examples
letsMeet(100, 10, 30) ? "2h 30min 0s"

letsMeet(280, 70, 80) ? "1h 52min 0s"

letsMeet(90, 75, 65) ? "0h 38min 34s"
*/
std::string letsMeet(float distance, int va, int vb) {
	float t = (float) distance / (va + vb);
	//find hour
    int h = (int) t;
    //find minutes
    float m = 60 * (t - h);
    //we get seconds when we subtract the float minute with integer minute..
    std::string ans = std::to_string(h) + "h " + std::to_string((int) m) + "min " + std::to_string((int) (60 * (m - (int) m))) + "s";
    return ans;
}
