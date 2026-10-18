// FUN_004963b0 @ 004963b0 body=[[004963b0, 0049661e] [00496622, 0049662d]]


/* WARNING: Removing unreachable block (ram,0x00496616) */

void FUN_004963b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b519c1;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CMap::vftable;
  param_1[2] = CMap::vftable;
  local_8 = 0x1f;
  FUN_004a35a0(param_1 + 0xab8,&local_14,param_1[0xab8],param_1[0xab9]);
  FUN_00aaea59(param_1[0x871]);
  FUN_00aaea59(param_1[0xaad]);
  FUN_00aaea59(param_1[0xaae]);
  if ((undefined4 *)param_1[0x84b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x84b])(1);
  }
  if ((undefined4 *)param_1[0x84c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x84c])(1);
  }
  if ((undefined4 *)param_1[0x84d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x84d])(1);
  }
  piVar4 = (int *)param_1[0xa9e];
  iVar2 = param_1[0xa9f] - (int)piVar4 >> 2;
  if ((iVar2 != 0) && (piVar3 = piVar4 + iVar2, local_14 = piVar3, piVar4 != piVar3)) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
        piVar3 = local_14;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
  }
  piVar4 = (int *)param_1[0xaa2];
  iVar2 = param_1[0xaa3] - (int)piVar4 >> 2;
  if ((iVar2 != 0) && (piVar3 = piVar4 + iVar2, local_14 = piVar3, piVar4 != piVar3)) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
        piVar3 = local_14;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
  }
  piVar4 = (int *)param_1[0x892];
  iVar2 = param_1[0x893] - (int)piVar4 >> 2;
  if ((iVar2 != 0) && (piVar3 = piVar4 + iVar2, local_14 = piVar3, piVar4 != piVar3)) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
        piVar3 = local_14;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
  }
  piVar4 = (int *)param_1[0x88e];
  iVar2 = param_1[0x88f] - (int)piVar4 >> 2;
  if ((iVar2 != 0) && (piVar3 = piVar4 + iVar2, local_14 = piVar3, piVar4 != piVar3)) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
        piVar3 = local_14;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
  }
  piVar4 = (int *)param_1[0xa9a];
  iVar2 = param_1[0xa9b] - (int)piVar4 >> 2;
  if ((iVar2 != 0) && (piVar3 = piVar4 + iVar2, local_14 = piVar3, piVar4 != piVar3)) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
        piVar3 = local_14;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0xaaa]) {
    do {
      puVar1 = *(undefined4 **)(param_1[0xaa9] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0xaaa]);
  }
  piVar4 = (int *)param_1[0x879];
  iVar2 = param_1[0x87a] - (int)piVar4 >> 2;
  if ((iVar2 != 0) && (piVar3 = piVar4 + iVar2, local_14 = piVar3, piVar4 != piVar3)) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
        piVar3 = local_14;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
  }
  DAT_0125870c = 0;
  FUN_00409350("province_flag_sprites",0x15);
  local_8 = CONCAT31(local_8._1_3_,0x20);
  FUN_009a4ca0(param_1[0xab7]);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0xab7]);
}

