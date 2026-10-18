// FUN_00ada5b0 @ 00ada5b0 body=[[00ada5b0, 00ada77c]]


void FUN_00ada5b0(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int aiStack_5c [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  uint uStack_38;
  int *piStack_2c;
  int *piStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  byte bStack_1a;
  undefined1 auStack_18 [8];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3737f;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)aiStack_5c;
  ExceptionList = &local_c;
  iVar2 = (**(code **)(*param_1 + 4))(DAT_00ef259c ^ (uint)&stack0xffffff98);
  if (iVar2 == 2) {
    FUN_00b00ea0();
    piStack_2c = param_1;
    piStack_28 = param_1;
    cVar1 = FUN_00aed9c0(in_ECX + 4,&piStack_2c,0,0);
    if (cVar1 != '\0') {
      aiStack_5c[0] = 0;
      aiStack_5c[1] = 0;
      aiStack_5c[2] = 0;
      uStack_4 = 0;
      uStack_50 = CONCAT22(uStack_50._2_2_,600);
      FUN_00ada510(aiStack_5c);
      (**(code **)(*param_1 + 8))(auStack_18,7);
      if ((((cStack_20 == 'M') && (cStack_1f == 'O')) && (cStack_1e == 'S')) && (cStack_1d == ' '))
      {
        uStack_38 = (uint)bStack_1a;
        puStack_3c = &stack0xffffff9c;
        aiStack_5c[2] = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        iStack_44 = 0;
        uStack_40 = 0;
        do {
          cVar1 = FUN_00ada140(param_1,aiStack_5c + 2);
        } while (cVar1 != '\0');
        (**(code **)(*param_1 + 100))();
        FUN_00ada0f0(aiStack_5c);
        aiStack_5c[1] = 0;
        aiStack_5c[2] = 0;
        if (aiStack_5c[0] != 0) {
          (*(code *)PTR__free_00f01b10)(aiStack_5c[0]);
          aiStack_5c[0] = 0;
        }
        uStack_4 = 0xffffffff;
        if (iStack_44 != 0) {
          if (aiStack_5c[0] != 0) {
            (*(code *)PTR__free_00f01b10)(aiStack_5c[0]);
          }
          goto LAB_00ada75d;
        }
      }
      else {
        FUN_00b15d30("The motion set file is not a valid file.");
        (**(code **)(*param_1 + 100))();
      }
      uStack_4 = 0xffffffff;
      if (aiStack_5c[0] != 0) {
        (*(code *)PTR__free_00f01b10)(aiStack_5c[0]);
      }
    }
  }
  else {
    FUN_00b15d30("Given file is not a memory file. Cannot process pre-passes.");
  }
LAB_00ada75d:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)aiStack_5c);
  return;
}

