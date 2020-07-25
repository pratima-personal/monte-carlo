#ifndef CONSTANTS_H
#define CONSTANTS_H

// FUNCTION + VARIABLE DECLARATIONS

#include <math.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

double self_energy(double);
void init_rod(int);
void calc_gradient_matrix();
void update_gradient_matrix(int, int);
double mc_sweep(gsl_rng *r);
int metropolis_step(gsl_rng *r);
double compute_dE(int, int, double);
double compute_eta();
double compute_eta2();
double compute_gradient(int, int, char = 'z');
double compute_square_gradient(int, int);
double interaction_energy(int, int);
double compute_total_energy();
double get_self_energy();
double get_interaction_energy();
const double pi = atan(1.0)*4;
const double kB = 1.3806503 * 6.0221415 / 4184.0;
double deg_to_rad(double th) {
  return th * pi / 180;
}

double rad_to_deg(double th) {
  return th * 180 / pi;
}
double T0 = 375.6, temp = 370.0, beta = 1/(kB*360.0), deta_max = 0.1;
int bound_on = 0;
double a = -31.9, d0 = 0.0, c = 720;
double h = -0.0492;
double kappa = 31.8;
double E_tot = 0.0, eta_tot = 0.0;
const int  N = 11, n_steps = 10000000;   // N is number of lattice sites in each dimension
double lattice[N][N], grad_x[N][N], grad_z[N][N];

#endif
