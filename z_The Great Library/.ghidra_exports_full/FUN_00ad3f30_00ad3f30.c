// FUN_00ad3f30 @ 00ad3f30 body=[[00ad3f30, 00ad4068]]


void FUN_00ad3f30(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b36e7f;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  local_4 = 2;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined2 *)(in_ECX + 3) = 0x25b;
  *(undefined2 *)(in_ECX + 0xb) = 0x25b;
  *(undefined2 *)(in_ECX + 7) = 0x25b;
  puVar2 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(4,0x25b,4,0,0,0xffffffff,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00e3c594;
  }
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  in_ECX[0xc] = puVar2;
  iVar3 = (*(code *)PTR_FUN_00f01b08)(8,0x25c,4,0,0,0xffffffff);
  local_4._0_1_ = 3;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00ad4530();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((undefined4 *)in_ECX[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xd])(1);
  }
  in_ECX[0xd] = uVar4;
  if ((uint)in_ECX[6] < 400) {
    if (in_ECX[4] == 0) {
      uVar4 = (*(code *)PTR_FUN_00f01b08)(0x1900,*(undefined2 *)(in_ECX + 7),4,2,0,0xffffffff);
    }
    else {
      uVar4 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[4]);
    }
    in_ECX[4] = uVar4;
    in_ECX[6] = 400;
  }
  ExceptionList = local_c;
  return;
}

