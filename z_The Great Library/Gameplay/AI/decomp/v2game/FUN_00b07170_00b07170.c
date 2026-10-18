// FUN_00b07170 @ 00b07170 body=[[00b07170, 00b07273]]


void FUN_00b07170(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b38e4e;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfd14;
  uVar1 = in_ECX[0x12];
  uVar4 = 0;
  local_4 = 1;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(in_ECX[0x11] + uVar4 * 4);
      if (piVar2 != (int *)0x0) {
        local_4 = CONCAT31(local_4._1_3_,2);
        *(undefined2 *)(piVar2 + 1) = 0;
        if (*piVar2 != 0) {
          (*(code *)PTR__free_00f01b10)(*piVar2,uVar3);
        }
        *piVar2 = 0;
        if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar2[2])(1);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        if (*piVar2 != 0) {
          (*(code *)PTR__free_00f01b10)(*piVar2);
        }
        (*(code *)PTR__free_00f01b10)(piVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  if (in_ECX[0x11] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x11]);
    in_ECX[0x11] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[0x11] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x11]);
  }
  local_4 = 0xffffffff;
  FUN_00b07410();
  ExceptionList = local_c;
  return;
}

