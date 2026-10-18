// FUN_00853c80 @ 00853c80 body=[[00853c80, 00853cd8] [00853ce0, 00853dab]]


void FUN_00853c80(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  float fVar4;
  int local_10;
  float local_c;
  int local_8;
  
  if (in_ECX[4] != 0) {
    iVar1 = *(int *)(in_ECX[4] + 0xe8);
    piVar3 = (int *)(**(code **)(*param_1 + 0x1cc))();
    if ((piVar3 != (int *)0x0) && (piVar3[2] != 0)) {
      piVar3 = (int *)*piVar3;
      local_8 = 0;
      local_c = 0.0;
      if (piVar3 != (int *)0x0) {
        do {
          iVar2 = *piVar3;
          piVar3 = (int *)piVar3[2];
          if (*(int *)(iVar2 + 0x110) == 0) {
            FUN_004a0e80(DAT_0125870c,&local_10);
            fVar4 = (float)local_10 / 1000.0 + 0.0;
            if ((iVar1 != 0) && (*(int *)(iVar2 + 0xe8) != iVar1)) {
              fVar4 = fVar4 + 1e+06;
            }
            if ((local_8 == 0) || (fVar4 < local_c)) {
              local_c = fVar4;
              local_8 = iVar2;
            }
          }
        } while (piVar3 != (int *)0x0);
        if (local_8 != 0) {
          (**(code **)(*in_ECX + 8))();
          (**(code **)(*param_1 + 0x1d4))(local_8);
          FUN_00826800();
        }
      }
    }
  }
  return;
}

