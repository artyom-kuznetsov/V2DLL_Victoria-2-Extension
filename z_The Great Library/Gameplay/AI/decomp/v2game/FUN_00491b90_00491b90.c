// FUN_00491b90 @ 00491b90 body=[[00491b90, 00491bb9]]


void FUN_00491b90(void)

{
  int *in_ECX;
  
  if ((in_ECX[2] != 0) || (in_ECX[3] != 0)) {
    (**(code **)(*in_ECX + 0x18))(in_ECX + 2);
  }
  FUN_004911a0(in_ECX + 0xe);
  return;
}

