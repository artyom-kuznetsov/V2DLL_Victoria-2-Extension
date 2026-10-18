// FUN_00b13ec0 @ 00b13ec0 body=[[00b13ec0, 00b13ed6]]


float10 FUN_00b13ec0(void)

{
  undefined4 *in_ECX;
  double dVar1;
  
  if ((char *)*in_ECX == (char *)0x0) {
    return (float10)-1.0;
  }
  dVar1 = _atof((char *)*in_ECX);
  return (float10)dVar1;
}

