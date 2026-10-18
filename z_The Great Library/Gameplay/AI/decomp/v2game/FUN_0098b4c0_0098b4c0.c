// FUN_0098b4c0 @ 0098b4c0 body=[[0098b4c0, 0098b4f8] [0098b500, 0098b587] [0098b596, 0098b5cc] [0098b5d2, 0098b606] [0098b610, 0098b62e] [0098b634, 0098b650]]


void FUN_0098b4c0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *piVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e579;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e378e8;
  local_8 = 3;
  piVar5 = *(int **)in_ECX[2];
  if (piVar5 != (int *)in_ECX[2]) {
    do {
      piVar2 = (int *)piVar5[4];
      (**(code **)(*piVar2 + 0x80))();
      (**(code **)(*piVar2 + 0x24))(1);
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != (int *)in_ECX[2]);
  }
  iVar3 = *(int *)(in_ECX[2] + 4);
  if (*(char *)(iVar3 + 0x15) == '\0') {
    FUN_00aa9f30(*(undefined4 *)(iVar3 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  *(undefined4 *)(in_ECX[2] + 4) = in_ECX[2];
  *(undefined4 *)in_ECX[2] = in_ECX[2];
  *(undefined4 *)(in_ECX[2] + 8) = in_ECX[2];
  in_ECX[3] = 0;
  FUN_0098bf40();
  if (in_ECX[0x49] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x49]);
  }
  DAT_01258ac4 = DAT_01258ac4 + -1;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0xb] = &PTR_FUN_00e3d250;
  FUN_009f8fd0();
  for (iVar3 = in_ECX[0x42]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xd8)) {
    *(undefined4 *)(iVar3 + 0xe4) = 0;
  }
  if ((uint)in_ECX[0x12] < 0x10) {
    in_ECX[0x12] = 0xf;
    in_ECX[0x11] = 0;
    *(undefined1 *)(in_ECX + 0xd) = 0;
    FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0xd]);
}

