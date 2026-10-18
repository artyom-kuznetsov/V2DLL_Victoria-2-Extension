// FUN_0066eee0 @ 0066eee0 body=[[0066eee0, 0066efb4] [0066efb8, 0066f051]]


void FUN_0066eee0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_ECX + 0x144))();
  if (cVar1 == '\0') {
    if (*(char *)(in_ECX[0x749] + 0x67) == '\0') {
      *(char *)(in_ECX + 0x781) = (char)in_ECX[0x54e];
      if (((char)in_ECX[0x54e] == '\0') && ((char)in_ECX[0x17] == '\0')) {
        (**(code **)(*in_ECX + 0x15c))();
      }
      (**(code **)(*(int *)(in_ECX[0x749] + 0x18) + 0x34))();
      (**(code **)(*(int *)in_ECX[0x749] + 0x70))();
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("menu_panel",10);
      local_8 = 0;
      iVar2 = (**(code **)(*(int *)in_ECX[0x749] + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_0066bc90();
      (**(code **)(*in_ECX + 0xa4))(0);
      cVar1 = FUN_0066bbf0();
      if (cVar1 != '\0') {
        FUN_0066bd60(in_ECX[0x35f],0);
      }
      iVar2 = in_ECX[0x780];
      if (*(char *)(*(int *)(iVar2 + 0x28) + 0x67) != '\0') {
        (**(code **)(*(int *)(*(int *)(iVar2 + 0x28) + 0x18) + 0x38))();
        if (*(char *)(iVar2 + 0x38) == '\0') {
          cVar1 = (**(code **)(**(int **)(iVar2 + 0x20) + 0x158))();
          if (cVar1 != '\0') {
            (**(code **)(**(int **)(iVar2 + 0x20) + 0x15c))();
            ExceptionList = local_10;
            return;
          }
        }
      }
    }
    else {
      FUN_0066f060();
    }
  }
  ExceptionList = local_10;
  return;
}

