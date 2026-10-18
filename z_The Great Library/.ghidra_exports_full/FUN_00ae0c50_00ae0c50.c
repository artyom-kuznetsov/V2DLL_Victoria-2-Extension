// FUN_00ae0c50 @ 00ae0c50 body=[[00ae0c50, 00ae0dc3]]


void FUN_00ae0c50(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  uint uVar3;
  
  uVar2 = in_ECX[9];
  if (uVar2 != in_ECX[10]) {
    if ((in_ECX[0xb] & 1) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,uVar2 * 0x40 + 0x10,500,0x10,0,0,0);
      uVar3 = uVar1 & 0xf;
      *in_ECX = uVar1;
      if ((short)uVar3 == 0) {
        uVar3 = 0x10;
      }
      in_ECX[3] = (uVar1 - uVar3) + 0x10;
    }
    if ((in_ECX[0xb] & 2) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[1],uVar2 * 0x40 + 0x10,500,0x10,0,0,0);
      uVar3 = uVar1 & 0xf;
      in_ECX[1] = uVar1;
      if ((short)uVar3 == 0) {
        uVar3 = 0x10;
      }
      in_ECX[4] = (uVar1 - uVar3) + 0x10;
    }
    if ((in_ECX[0xb] & 4) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[2],uVar2 * 0x40 + 0x10,500,0x10,0,0,0);
      uVar3 = uVar1 & 0xf;
      in_ECX[2] = uVar1;
      if ((short)uVar3 == 0) {
        uVar3 = 0x10;
      }
      in_ECX[5] = (uVar1 - uVar3) + 0x10;
    }
    if ((in_ECX[0xb] & 0x10) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[6],uVar2 * 0x38,500,0x10,0,0,0);
      in_ECX[6] = uVar1;
    }
    if ((in_ECX[0xb] & 8) != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[7],uVar2 * 0x38,500,0x10,0,0,0);
      in_ECX[7] = uVar1;
    }
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[8],uVar2 * 4,500,0x10,0,0,0);
    in_ECX[8] = uVar2;
    in_ECX[10] = in_ECX[9];
  }
  return;
}

