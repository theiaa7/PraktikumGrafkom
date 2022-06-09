#include <windows.h>     // compability header buat versi windows
#include <GL/freeglut.h> // library freeglut :>

/* variable uwu */
char title[] = "star"; // title judul pake char/character
GLfloat star = 0.0f;  // deklarasi angle nanti 
int refreshMills = 8; // interval buat frame owo (permilisekon) 

/* Inisialisasi open GL window base */
void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);              // setting warna background screen
    glClearDepth(1.0f);                                // Setting kedalaman warna dari deket ke jauh
    glEnable(GL_DEPTH_TEST);                           // enable buat yang line12
    glDepthFunc(GL_LEQUAL);                            // tipe kedalaman dari depth test equal = sama dari persepsi view
    glShadeModel(GL_SMOOTH);                           // shading biar rotatenya nanti smooth :>
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST); // ngebantu buat line 15, perspective = sudut lihat
                                                       // nicest = angle terbaik :>
}

void display()
{                                                       // menampilkan objek 3d
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // buffer buat warna dan kedalaman 3d
    glMatrixMode(GL_MODELVIEW);                         // model view buat sudut pandang lagi pake matrix :>

    glLoadIdentity();                  // reset load state matrix biar misah :>
    glTranslatef(-0.1f, 0.0f, -9.0f);  // ke kanan dikit koordinat nya
    glRotatef(star, 1.0f, 0.0f, 0.0f); // rotasi, dari angle star terus ke koordinat x horizontal (1,1,1)-axis [NEW]

    // inisial

    glBegin(GL_TRIANGLES);                                // bikin bintang nya pake segitiga, jadi triangle
    glColor3f(0.8f, 0.8f, 0.0f);                          // warna ges
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c //titik sumbu
    glColor3f(0.8f, 0.8f, 0.0f);                          // warna sumbu
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l depan koordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d koordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j koordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l koordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j nkoordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h nkoordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f); // f nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f); // f koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); // e
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f); // f nkoordinat

    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f);    // e
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f);     // f koordinat
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); // e
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); // e
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m
    glEnd();

    // mulai lagi buat bintang ke 2
    glLoadIdentity();                  // Reset lagi state matrixnya biar kepisah :>
    glTranslatef(0.5f, 0.3f, -9.0f);   // geser kanan lagi dikit ges
    glRotatef(star, 0.0f, 1.0f, 0.0f); // muter y vertikal (1,1,1)-axis

    // inisial

    glBegin(GL_TRIANGLES); // masih sama ges
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l koordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(-0.4517712270093, -0.0423179642227, 0.0f); // c
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j nkoordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(-0.3, -0.5, 0.0f); // k
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.2550466112371, -0.2358175862938, 0.0f); // l koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j nkoordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.0663844797178, -0.3761048122953, 0.0f); // j koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.1771025447216, -0.4986545729403, 0.0f); // l
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.8f, 0.8f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h nkoordinat
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.1335651297556, -0.239042579995, 0.0f); // h koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f); // f nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.3254522549761, -0.0471554547745, 0.0f); // g
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f); // f koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); // e
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f); // f nkoordinat

    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f);    // e
    glVertex3f(0.061002771479, 0.0044444444444, 0.0f);     // f koordinat
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); // e
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d nkoordinat
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, 0.1f); // m

    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(-0.061546989166, 0.2495439657344, 0.0f); // e
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex3f(-0.1824842529605, -0.0020055429579, 0.0f); // d koordinat
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex3f(-0.0599344923155, -0.1632552280171, -0.1f); // m
    glEnd();

    glutSwapBuffers(); // nah yang ini buat swap buffer, kan ada bagian belakang sama depan :>

    star -= 0.90f; // ini ngatur angle nya tiap looping jadi -= 0.90f biar ga monoton
}

/* kita tambahin timer buat refresh framenya ges biar keliatan natural*/
void timer(int value)
{
    glutPostRedisplay();                   // minta re-display setiap abis looping
    glutTimerFunc(refreshMills, timer, 0); // nah ini tiap looping balik ke awal, minta refresh 
}

// fungsi yang reshape ini buat ngatur ya, ngatur kalo windownya itu di resize (gede kecilin)
// jadi sizenya tetep sama :>
void reshape(GLsizei width, GLsizei height)
{ // GLsizei diatas itu buat besar windownya.
// karena besar window pake interger buat windownya :>
    // nah disini input buat aspek rasio dari si windownya ya ges ya
    if (height == 0)
        height = 1; // kenapa di deklarasiin 1, nanti kalo 0 ga bisa nampil ges
    GLfloat aspect = (GLfloat)width / (GLfloat)height; //float nya buat apa?
                                                    // buat bintangnya ges aspeknya

    // nah ini view portnya di sesuain sama gede windownya
    glViewport(0, 0, width, height);

    // kalo udah, viewportnya nanti nyesuain sama matrix mode yang kita pake
    // yaitu adalah projection
    glMatrixMode(GL_PROJECTION); // ini biar pake projection nya
    glLoadIdentity();            // Reset lagi matrixnya kalo udah di sesuain
    // jadi bisa pake perspective fovy, aspect, zNear and zFar
    // fovy = field of view, aspect = gede kecilnya, znear sama zfar buat jauh dekatnya
    gluPerspective(10.0f, aspect, 0.1f, 100.0f); // pengaturan skalanya biar size nya ga berubah ges
}

/* tampilin deh disini */
int main(int argc, char **argv) // argc sama argv itu buat apa? 
                                // argc itu argument count, itungan argument ke fungsi utama ini
                                // argv itu argument vector, kan kita masukin koordinat vertex ke
                                // programnya tersebut :>
{
    glutInit(&argc, argv);            // Inisialisasi nya dari atas yaa
    glutInitDisplayMode(GLUT_DOUBLE); // display mode nya di set ke double buffer
    glutInitWindowSize(1600, 900);   // setting gede kecil nya window sesuai tinggi lebar
    glutInitWindowPosition(50, 50);   // posisi windownya :>
    glutCreateWindow(title);          // title dari windownya
    glutDisplayFunc(display);         // kalo pengen ada perubahan warna nya, ini kan merah sama kuning
    glutReshapeFunc(reshape);         // kalo windownya di gede kecilin :>
    initGL();                         // ini inisialisasi buat aktifin koordinat yang banyak di pake
    glutTimerFunc(0, timer, 0);       // ini timing pertama mulai looping
    glutMainLoop();                   // looping tampilan :>
    return 0;                         // si 0 buat ngasih statement program berhasil :>
}
