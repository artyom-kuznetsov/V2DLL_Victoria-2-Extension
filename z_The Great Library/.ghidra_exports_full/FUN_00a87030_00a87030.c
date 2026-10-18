// FUN_00a87030 @ 00a87030 body=[[00a87030, 00a87115] [00a87119, 00a8712a]]


/* WARNING: Removing unreachable block (ram,0x00a87110) */

void FUN_00a87030(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  pvStack_14 = ExceptionList;
  piVar3 = (int *)0x0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  puVar1 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x74) + 0x2c))();
  for (piVar2 = (int *)*puVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if (piVar2 < piVar3) {
      if (piVar3 == (int *)0x0) {
        FUN_00a513f0();
      }
      else {
        *piVar3 = *(int *)(((int)piVar2 >> 2) * 4);
      }
    }
    else if (piVar3 == (int *)0x0) {
      FUN_00a513f0();
    }
    else {
      *piVar3 = *piVar2;
    }
    piVar3 = piVar3 + 1;
  }
  (**(code **)(*(int *)(in_ECX + 0x74) + 0x24))();
  for (piVar2 = (int *)0x0; piVar2 < piVar3; piVar2 = piVar2 + 1) {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
  }
  ExceptionList = pvStack_14;
  return;
}

