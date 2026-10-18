// FUN_0059a3e0 @ 0059a3e0 body=[[0059a3e0, 0059a5ef]]


void FUN_0059a3e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  undefined4 local_10 [3];
  
  iVar6 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x18);
  iVar3 = *(int *)(iVar6 + 0x110);
  if ((iVar3 == 0) ||
     (iVar3 = *(int *)(iVar3 + 0x10),
     (int)(*(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34) & 0xfffffff8U) < 1)) {
    puVar7 = (undefined4 *)(iVar6 + 0x130);
  }
  else {
    puVar7 = *(undefined4 **)(iVar3 + 0x34);
  }
  local_10[0] = *puVar7;
  iVar6 = puVar7[1];
  FUN_005944b0(param_1);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
  if (iVar3 == 3) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x18);
    if ((*(int *)(iVar3 + 0x110) == 0) ||
       (iVar2 = *(int *)(*(int *)(iVar3 + 0x110) + 0x10),
       (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
      puVar7 = (undefined4 *)(iVar3 + 0x130);
    }
    else {
      puVar7 = *(undefined4 **)(iVar2 + 0x34);
    }
    if (iVar6 != puVar7[1]) {
      FUN_0048ea60(iVar3,*puVar7,puVar7[1],local_10[0],iVar6);
    }
  }
  else if (*(char *)(in_ECX + 0x18c) == '\0') {
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = param_1 + 0xe;
    }
    param_1 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      do {
        piVar4 = (int *)*param_1;
        iVar6 = piVar4[0xf];
        param_1 = (int *)param_1[2];
        piVar5 = (int *)(**(code **)(*piVar4 + 0x3c))(local_10);
        iVar6 = __alldiv((longlong)*piVar5 * (longlong)iVar6,1000,0);
        piVar4 = (int *)(*(int *)(in_ECX + 0x44) + *(int *)(piVar4[0xe] + 0x24) * 4);
        *piVar4 = *piVar4 + iVar6;
      } while (param_1 != (int *)0x0);
      return;
    }
  }
  else {
    if (param_1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = param_1 + 0xe;
    }
    piVar4 = (int *)*piVar4;
    if (piVar4 != (int *)0x0) {
      do {
        (**(code **)(*param_1 + 0x3c))();
        piVar1 = (int *)*piVar4;
        iVar6 = piVar1[0xf];
        piVar4 = (int *)piVar4[2];
        piVar5 = (int *)(**(code **)(*piVar1 + 0x3c))(local_10);
        iVar6 = __alldiv((longlong)*piVar5 * (longlong)iVar6,1000,0);
        piVar5 = (int *)(*(int *)(in_ECX + 0x44) + *(int *)(piVar1[0xe] + 0x24) * 4);
        *piVar5 = *piVar5 + iVar6;
        if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
          for (puVar7 = *(undefined4 **)(in_ECX + 0x16c); puVar7 != (undefined4 *)0x0;
              puVar7 = (undefined4 *)puVar7[2]) {
            if ((int *)*puVar7 == piVar1) goto LAB_0059a52a;
          }
          iVar6 = *(int *)(in_ECX + 0x170);
          piVar5 = (int *)FUN_00aae9af(0x10);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = (int)piVar1;
            piVar5[1] = iVar6;
            piVar5[2] = 0;
            *(undefined1 *)(piVar5 + 3) = 0;
          }
          iVar3 = *(int *)(in_ECX + 0x174);
          *(int **)(in_ECX + 0x170) = piVar5;
          *(int *)(in_ECX + 0x174) = iVar3 + 1;
          if (iVar3 == 0) {
            *(int **)(in_ECX + 0x16c) = piVar5;
          }
          else {
            *(int **)(iVar6 + 8) = piVar5;
          }
        }
LAB_0059a52a:
        if (piVar4 == (int *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

