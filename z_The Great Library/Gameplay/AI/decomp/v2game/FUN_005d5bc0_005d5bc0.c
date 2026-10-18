// FUN_005d5bc0 @ 005d5bc0  (requested 005D5BC0, first bytes: 55 8B EC 83 EC 08 53 8B)


void FUN_005d5bc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *in_EAX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *local_c;
  int *local_8;
  
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(in_EAX + 0x12) = 1;
  if (in_EAX[0x10] != 0) {
    puVar4 = (undefined4 *)FUN_005cb1b0();
    do {
      piVar7 = *(int **)*puVar4;
      FUN_005cb230(piVar7);
      local_c = piVar7;
      FUN_005dadd0(param_1 + 0xe,&local_c);
      piVar7[0x18] = param_1[0x30];
      piVar7[0x19] = param_1[0x31];
      piVar7[0x1d] = (int)param_1;
      iVar5 = FUN_005cabe0(param_1);
      iVar6 = param_1[0x68];
      param_1[0x68] = iVar5;
      if ((iVar5 != iVar6) || ((char)param_1[0x2f] != '\0')) {
        FUN_005cae80(param_1);
        *(undefined1 *)(param_1 + 0x2f) = 0;
      }
    } while (in_EAX[0x10] != 0);
  }
  cVar3 = (**(code **)(*in_EAX + 0x3c))();
  if (((cVar3 != '\0') && (iVar6 = (**(code **)(*in_EAX + 0x30))(), *(int *)(iVar6 + 0x1ac) != 0))
     && (cVar3 = (**(code **)(*param_1 + 0x3c))(), cVar3 != '\0')) {
    iVar6 = (**(code **)(*in_EAX + 0x30))();
    piVar7 = *(int **)(iVar6 + 0x1a4);
    while (piVar7 != (int *)0x0) {
      local_c = (int *)piVar7[2];
      piVar7 = (int *)*piVar7;
      local_8 = piVar7;
      iVar6 = (**(code **)(*in_EAX + 0x30))();
      for (piVar1 = *(int **)(iVar6 + 0x1a4); (piVar1 != (int *)0x0 && ((int *)*piVar1 != piVar7));
          piVar1 = (int *)piVar1[2]) {
      }
      FUN_005f2ae0(piVar1);
      iVar5 = (**(code **)(*param_1 + 0x30))();
      iVar6 = *(int *)(iVar5 + 0x1a8);
      piVar7 = (int *)FUN_00aae9af(0x10);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = (int)local_8;
        piVar7[1] = iVar6;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar2 = *(int *)(iVar5 + 0x1ac);
      *(int **)(iVar5 + 0x1a8) = piVar7;
      *(int *)(iVar5 + 0x1ac) = iVar2 + 1;
      if (iVar2 == 0) {
        *(int **)(iVar5 + 0x1a4) = piVar7;
      }
      else {
        *(int **)(iVar6 + 8) = piVar7;
      }
      iVar6 = (**(code **)(*param_1 + 0x30))();
      iVar5 = (**(code **)(*local_8 + 0x2c))();
      *(int *)(iVar5 + 0x1b4) = iVar6;
      *(undefined4 *)(iVar5 + 0x1a4) = 0;
      piVar7 = local_c;
      if (iVar6 == 0) {
        *(undefined4 *)(iVar5 + 0x1a8) = 0;
      }
    }
  }
  cVar3 = (**(code **)(*(int *)param_1[0x36] + 0x20))();
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(int *)in_EAX[0x36] + 0x20))(), cVar3 != '\0')) {
    iVar6 = in_EAX[0x36];
  }
  else {
    cVar3 = (**(code **)(*(int *)param_1[0x36] + 0x20))();
    if ((cVar3 == '\0') ||
       ((cVar3 = (**(code **)(*(int *)in_EAX[0x36] + 0x20))(), cVar3 == '\0' ||
        (*(int *)(in_EAX[0x36] + 0xd0) <= *(int *)(param_1[0x36] + 0xd0))))) goto LAB_005d5dfe;
    FUN_005b7080(0);
    iVar6 = in_EAX[0x36];
  }
  FUN_005cbcc0(iVar6);
  uVar8 = FUN_005b6140();
  FUN_005cbcc0(uVar8);
LAB_005d5dfe:
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(in_EAX + 0x12) = 0;
  FUN_005c68c0(param_1);
  FUN_005cae80(param_1);
  FUN_005cb2c0(param_1[0x37]);
  return;
}

