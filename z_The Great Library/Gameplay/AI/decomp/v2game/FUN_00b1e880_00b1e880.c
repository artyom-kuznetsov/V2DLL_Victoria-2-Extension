// FUN_00b1e880 @ 00b1e880 body=[[00b1e880, 00b1ea2c]]


undefined4 FUN_00b1e880(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  undefined1 local_24 [8];
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  iVar6 = *(int *)(in_ECX + 8);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    piVar3 = *(int **)(in_ECX + 4);
    do {
      if (((int *)*piVar3)[1] == (uint)*(byte *)(param_1 + 0x14)) {
        piVar7 = (int *)*piVar3;
      }
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (piVar7 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar7 + 0x14))(param_1,param_2);
      return uVar4;
    }
  }
  switch(*(byte *)(param_1 + 0x14) - 1) {
  case 0:
    cVar2 = FUN_00b13f60();
    if (cVar2 != '\0') {
      fVar8 = (float10)FUN_00b13ec0();
      FUN_00b1ea80((float)fVar8);
      return 1;
    }
    break;
  case 1:
    cVar2 = FUN_00b14020();
    if (cVar2 != '\0') {
      uVar4 = FUN_00b13ea0();
      FUN_00b1eab0(uVar4);
      return 1;
    }
    break;
  case 2:
    cVar2 = FUN_00b14f20();
    if (cVar2 != '\0') {
      uVar1 = FUN_00b14810();
      FUN_00b1e050(uVar1);
      return 1;
    }
    break;
  case 3:
    cVar2 = FUN_00b15540();
    if (cVar2 != '\0') {
      uVar4 = FUN_00b15270(local_24);
      FUN_00b1ebf0(uVar4);
      return 1;
    }
    break;
  case 4:
    cVar2 = FUN_00b155f0();
    if (cVar2 != '\0') {
      uVar4 = FUN_00b15330(local_1c);
      FUN_00b1ec20(uVar4);
      return 1;
    }
    break;
  case 5:
    cVar2 = FUN_00b156b0();
    if (cVar2 != '\0') {
      uVar4 = FUN_00b15420(local_10);
      FUN_00b1ec50(uVar4);
      return 1;
    }
    break;
  case 6:
    puVar5 = (undefined1 *)*param_2;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00ded94d;
    }
    FUN_00b1e000(puVar5);
    return 1;
  }
  return 0;
}

