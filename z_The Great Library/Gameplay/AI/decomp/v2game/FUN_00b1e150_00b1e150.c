// FUN_00b1e150 @ 00b1e150 body=[[00b1e150, 00b1e2eb]]


undefined4 FUN_00b1e150(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = (int *)0x0;
  param_2[1] = 0;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    *(undefined1 *)*param_2 = 0;
  }
  iVar4 = *(int *)(in_ECX + 8);
  if (iVar4 != 0) {
    piVar5 = *(int **)(in_ECX + 4);
    do {
      if (((int *)*piVar5)[1] == (uint)*(byte *)(param_1 + 0x14)) {
        piVar3 = (int *)*piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar3 + 0x10))(param_1,param_2);
      return uVar2;
    }
  }
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 1:
    FUN_00b13d30(param_2,&DAT_00de0a78,(double)*(float *)(param_1 + 4));
    return 1;
  case 2:
    FUN_00b13d30();
    return 1;
  case 3:
    FUN_00ad32c0();
    return 1;
  case 4:
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00b13d30(param_2,"%.8f,%.8f",(double)**(float **)(param_1 + 4),
                   (double)(*(float **)(param_1 + 4))[1]);
      return 1;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 4) != 0) {
      pfVar1 = *(float **)(param_1 + 4);
      FUN_00b13d30(param_2,"%.8f,%.8f,%.8f",(double)*pfVar1,(double)pfVar1[1],(double)pfVar1[2]);
      return 1;
    }
    break;
  case 6:
    if (*(int *)(param_1 + 4) != 0) {
      pfVar1 = *(float **)(param_1 + 4);
      FUN_00b13d30(param_2,"%.8f,%.8f,%.8f,%.8f",(double)*pfVar1,(double)pfVar1[1],(double)pfVar1[2]
                   ,(double)pfVar1[3]);
      return 1;
    }
    break;
  case 7:
    FUN_00b13d30();
    return 1;
  }
  return 0;
}

