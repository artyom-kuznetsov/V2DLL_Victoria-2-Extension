// FUN_00ae0dd0 @ 00ae0dd0 body=[[00ae0dd0, 00ae0dd4]]


void FUN_00ae0dd0(void)

{
  undefined4 *in_ECX;
  
  if ((*(byte *)(in_ECX + 0xb) & 1) != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  if ((*(byte *)(in_ECX + 0xb) & 2) != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
  }
  if ((*(byte *)(in_ECX + 0xb) & 4) != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[2]);
  }
  if ((*(byte *)(in_ECX + 0xb) & 0x10) != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[6]);
  }
  if ((*(byte *)(in_ECX + 0xb) & 8) != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[7]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[3] = 0;
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[1] = 0;
  in_ECX[5] = 0;
  in_ECX[2] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  (*(code *)PTR__free_00f01b10)(in_ECX[8]);
  in_ECX[8] = 0;
  return;
}

