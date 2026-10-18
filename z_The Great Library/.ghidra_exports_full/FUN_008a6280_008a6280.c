// FUN_008a6280 @ 008a6280 body=[[008a6280, 008a65cf]]


void FUN_008a6280(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 < 0x794) {
    if (param_2 == 0x793) {
      *(bool *)((int)in_ECX + 0x1a2) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 < 0x3e3) {
      if (param_2 == 0x3e2) {
        FUN_004012f0(in_ECX + 0x37);
        return;
      }
      if (param_2 < 0x3b8) {
        if (param_2 == 0x3b7) {
          (**(code **)(in_ECX[0x30] + 0xc))(param_1);
          return;
        }
        if (param_2 == 0xb) {
          local_8 = FUN_00aaf0c5(param_1 + 0x22c);
          local_c = 0x27;
          (**(code **)(*in_ECX + 0x18))(&local_c);
          return;
        }
        if (param_2 == 0x3b6) {
          (**(code **)(in_ECX[0xc] + 0xc))(param_1);
          return;
        }
      }
      else if (param_2 == 0x3b9) {
        iVar2 = FUN_00aae9af(100);
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_008a5c70();
        }
        (**(code **)(*piVar3 + 0xc))(param_1);
        FUN_0068f390();
        return;
      }
    }
    else if (param_2 < 0x652) {
      if (param_2 == 0x651) {
        *(bool *)((int)in_ECX + 0x1a3) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
      if (param_2 == 0x3e3) {
        FUN_004012f0(in_ECX + 0x45);
        return;
      }
      if (param_2 == 0x4ac) {
        (**(code **)(in_ECX[0x13] + 0xc))(param_1);
        return;
      }
    }
    else if (param_2 == 0x713) {
      *(bool *)(in_ECX + 0x68) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
  }
  else if (param_2 < 0x9ef) {
    if (param_2 == 0x9ee) {
      pcVar4 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar4 - (param_1 + 0x22d));
      return;
    }
    if (param_2 < 0x936) {
      if (param_2 == 0x935) {
        FUN_004012f0(in_ECX + 0x6a);
        return;
      }
      if (param_2 == 0x7bd) {
        *(bool *)(in_ECX + 0x69) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
      if (param_2 == 0x7df) {
        FUN_004012f0(in_ECX + 0x61);
        return;
      }
    }
    else if (param_2 == 0x9a2) {
      *(bool *)((int)in_ECX + 0x1a1) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x9ef:
      FUN_004012f0(in_ECX + 0x53);
      return;
    case 0x9f0:
      FUN_004012f0(in_ECX + 0x5a);
      return;
    case 0xa21:
      FUN_009a1bb0((int)in_ECX + 0x1a5);
      return;
    case 0xa25:
      FUN_004012f0(in_ECX + 0x3e);
      return;
    }
  }
  if (param_2 != 0xb) {
    FUN_009a0f40();
    return;
  }
  FUN_009a19f0(param_1,in_ECX + 2);
  return;
}

