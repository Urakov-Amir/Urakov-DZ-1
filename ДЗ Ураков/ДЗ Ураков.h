#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double q, w, e, r, t, y, u, i, o, p, a, s, d{}, f, g, h, j, k, l, z, x, c, v, b, n, m;
	while (true)
	{
		cout << "\n ¬ведите номер варианта\n";
		int number;
		cin >> number;
		switch (number)
		{
		case 1:

			cout << "введите t:";
			cin >> t;
			cout << "введите l:";
			cin >> l;
			r = 3 * pow(t, 2) + 3 * pow(l, 3) + 4.9;
			cout << "R= " << r;
			break;
		case 2:

			cout << "введите p:";
			cin >> p;
			cout << "введите y:";
			cin >> y;
			k = log10(pow(p, 2) + pow(y, 3)) + exp(p);
			cout << "K= " << k;
			break;
		case 3:

			cout << "введите n:";
			cin >> n;
			cout << "введите y:";
			cin >> y;
			g = n * (y + 3.5) + sqrt(y);
			cout << "g= " << g;
			break;
		case 4:

			cout << "введите a:";
			cin >> a;
			cout << "введите t:";
			cin >> t;
			r = 9.8 * pow(a, 2) + 5, 52 * cos(pow(t, 5));
			cout << "D= " << d;
			break;
		case 5:

			cout << "введите x:";
			cin >> a;
			l = 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3);
			cout << "L= " << l;
			break;
		case 6:
			cout << "введите y:";
			cin >> y;
			m = cos(2 * y) + 3.6 * exp(x);
			cout << "M= " << m;
			break;
		case 7:
			cout << "введите m:";
			cin >> m;
			n = pow(m, 2) + 2.8 * fabs(m) + 0.55;
			cout << "N= " << n;
			break;
		case 8:
			cout << "введите y:";
			cin >> y;
			t = sqrt(fabs(6 * pow(y, 2) - 0.1 * y + 4));
			cout << "T= " << t;
			break;
		case 9:
			cout << "введите y:";
			cin >> y;
			cout << "введите x:";
			cin >> x;
			v = log10(y + 0.95) + pow(sin(x), 2);
			cout << "V= " << v;
			break;
		case 10:
			cout << "введите k:";
			cin >> k;
			cout << "введите x:";
			cin >> x;
			u = exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2);
			cout << "U= " << u;
			break;
		case 11:
			cout << "введите y:";
			cin >> y;
			cout << "введите x:";
			cin >> x;
			s = 9.756 * pow(y, 7) + 2 * tan(x);
			cout << "S= " << s;
			break;
		case 12:
			cout << "введите t:";
			cin >> t;
			cout << "введите x:";
			cin >> x;
			k = 7 * pow(t, 2) + 3 * sin(pow(x, 3)) + 9.2;
			cout << "K= " << k;
			break;
		case 13:
			cout << "введите y:";
			cin >> y;
			e = sqrt(fabs(3 * pow(y, 2) + 0.5 * y + 4));
			cout << "E= " << e;
			break;
		case 14:
			cout << "введите y:";
			cin >> y;
			cout << "введите x:";
			cin >> x;
			r = fabs(sqrt(pow(sin(y), 2) + 6.835) + exp(x));
			cout << "R= " << r;
			break;
		case 15:
			cout << "введите y:";
			cin >> y;
			h = sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y));
			cout << "H= " << h;
			break;
		case 16:
			cout << "введите y:";
			cin >> y;
			s = sqrt(cos(4 * pow(y, 2)) + 7.151);
			cout << "S= " << s;
			break;
		case 17:
			cout << "введите y:";
			cin >> y;
			n = 3 * pow(y, 2) + sqrt(y + 1);
			cout << "N= " << n;
			break;
		case 18:
			cout << "введите y:";
			cin >> y;
			z = 3 * pow(y, 2) + sqrt(pow(x, 3) + 1);
			cout << "Z= " << z;
			break;
		case 19:
			cout << "введите y:";
			cin >> y;
			cout << "введите n:";
			cin >> n;
			cout << "введите g:";
			cin >> g;
			p = n * sqrt(pow(y, 3) + 1.09 * g);
			cout << "P= " << p;
			break;
		case 20:
			cout << "введите k:";
			cin >> k;
			cout << "введите y:";
			cin >> y;
			cout << "введите x:";
			cin >> x;
			u = exp(k + y) + tan(x) * sqrt(y);
			cout << "U= " << u;
			break;
		case 21:
			cout << "введите y:";
			cin >> y;
			cout << "введите h:";
			cin >> h;
			p = exp(y + 5.5) + 9.1 + pow(h, 3);
			cout << "P= " << p;
			break;
		case 22:
			cout << "введите u:";
			cin >> u;
			cout << "введите y:";
			cin >> y;
			cout << "введите x:";
			cin >> x;
			t = sin(2 * u) * log10(2 * pow(y, 2) + sqrt(x));
			cout << "T= " << t;
			break;
		case 23:
			cout << "введите y:";
			cin >> y;
			cout << "введите f:";
			cin >> f;
			g = exp(2 * y) + sin(f);
			cout << "G= " << g;
			break;
		case 24:
			cout << "введите y:";
			cin >> y;
			f = 2 * sin(0.214 * pow(x, 5) + 1);
			cout << "F= " << f;
			break;
		case 25:
			cout << "введите y:";
			cin >> y;
			cout << "введите f:";
			cin >> f;
			g = exp(2 * y) + sin(pow(f,2));
			cout << "G= " << g;
			break;
		case 26:
			cout << "введите p:";
			cin >> p;
			z = sin(pow(pow(p,2)+0.4, 3));
			cout << "Z= " << z;
			break;
		case 27:
			cout << "введите v:";
			cin >>v;
			cout << "введите y:";
			cin >> y;
			cout << "введите x:";
			cin >> x;
			w = 1.03*v+exp(2*y)+tan(fabs(x));
			cout << "W= " << w;
			break;
		case 28:
			cout << "введите y:";
			cin >> y;
			cout << "введите h:";
			cin >> h;
			t =exp(y+h)+sqrt(fabs(6.4*y));
			cout << "T= " << t;
			break;
		case 29:
			cout << "введите y:";
			cin >> y;
			n = 3*pow(y,2)+sqrt(fabs(y+1));
			cout << "N= " << n;
			break;
		case 30:
			cout << "введите y:";
			cin >> y;
			cout << "введите r:";
			cin >> r;
			w = exp(y+r)+7.2*sin(r);
			cout << "W= " << w;
			break;

		}
	}
}
