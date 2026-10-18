// FUN_00ad7940 @ 00ad7940 body=[[00ad7940, 00ad79b9]]


void FUN_00ad7940(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)(in_ECX + 0xcc) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(in_ECX + 200);
      iVar3 = *(int *)(iVar5 + 4 + iVar1);
      while (iVar3 != 0) {
        iVar1 = *(int *)(iVar5 + iVar1) + -8 + *(int *)(iVar5 + 4 + iVar1) * 8;
        piVar2 = *(int **)(iVar1 + 4);
        *(undefined4 *)(iVar1 + 4) = 0;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))();
        }
        iVar1 = *(int *)(in_ECX + 200);
        iVar3 = *(int *)(iVar1 + 4 + iVar5);
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          *(int *)(iVar1 + 4 + iVar5) = iVar3;
          (*(code *)**(undefined4 **)(*(int *)(iVar1 + iVar5) + iVar3 * 8))(0);
        }
        iVar1 = *(int *)(in_ECX + 200);
        iVar3 = *(int *)(iVar5 + 4 + iVar1);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar4 < *(uint *)(in_ECX + 0xcc));
  }
  return;
}

