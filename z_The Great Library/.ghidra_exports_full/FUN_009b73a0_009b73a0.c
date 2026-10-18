// FUN_009b73a0 @ 009b73a0 body=[[009b73a0, 009b74fd]]


void FUN_009b73a0(double param_1,double param_2)

{
  double *in_ECX;
  double *in_EDX;
  double *unaff_ESI;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double in_XMM6_Qa;
  
  if (in_XMM6_Qa == 0.0) {
    *unaff_ESI = param_2;
    *in_EDX = param_2;
    *in_ECX = param_2;
    return;
  }
  param_1 = param_1 * 6.0;
  dVar1 = (double)((ulonglong)param_1 & 0x8000000000000000);
  dVar2 = (double)(-(ulonglong)
                    ((double)((ulonglong)param_1 ^ (ulonglong)dVar1) < 4503599627370496.0) &
                   0x4330000000000000 | (ulonglong)dVar1);
  dVar2 = (param_1 + dVar2) - dVar2;
  dVar2 = dVar2 - (double)(-(ulonglong)(dVar1 < dVar2 - param_1) & 0x3ff0000000000000);
  dVar3 = (1.0 - in_XMM6_Qa) * param_2;
  dVar4 = (1.0 - (param_1 - dVar2) * in_XMM6_Qa) * param_2;
  dVar1 = (1.0 - (1.0 - (param_1 - dVar2)) * in_XMM6_Qa) * param_2;
  if (dVar2 == 0.0) {
    *in_EDX = dVar1;
    *in_ECX = dVar3;
    *unaff_ESI = param_2;
    return;
  }
  if (dVar2 == 1.0) {
    *unaff_ESI = dVar4;
    *in_EDX = param_2;
    *in_ECX = dVar3;
    return;
  }
  if (dVar2 == 2.0) {
    *unaff_ESI = dVar3;
    *in_EDX = param_2;
    *in_ECX = dVar1;
    return;
  }
  if (dVar2 == 3.0) {
    *unaff_ESI = dVar3;
    *in_EDX = dVar4;
    *in_ECX = param_2;
    return;
  }
  *in_EDX = dVar3;
  if (dVar2 == 4.0) {
    *unaff_ESI = dVar1;
    *in_ECX = param_2;
    return;
  }
  *in_ECX = dVar4;
  *unaff_ESI = param_2;
  return;
}

