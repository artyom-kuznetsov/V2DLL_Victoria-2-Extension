// FUN_009b6010 @ 009b6010 body=[[009b6010, 009b6159]]


void FUN_009b6010(int *param_1,int *param_2)

{
  char cVar1;
  SHORT SVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int in_ECX;
  
  if ((param_1[2] == 0) && (*(char *)(in_ECX + 0x38) != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x30))();
    if (cVar1 != '\0') {
      *(undefined2 *)(in_ECX + 0x4c) = 1;
LAB_009b603e:
      *(char *)(param_1 + 6) = '\x01';
      return;
    }
  }
  else if ((param_1[2] == 1) &&
          ((*(char *)(in_ECX + 0x4f) != '\0' && (*(char *)(in_ECX + 0x164) != '\0')))) {
    if ((*param_1 == 0) && (param_1[1] == 0)) goto LAB_009b603e;
    cVar1 = FUN_009e0980(param_1);
    if ((((cVar1 != '\0') || (cVar1 = FUN_009e09c0(param_1), cVar1 != '\0')) ||
        (param_1[1] == 0x102)) ||
       (((cVar1 = FUN_009e0a00(), cVar1 != '\0' || (cVar1 = FUN_009e0a20(), cVar1 != '\0')) ||
        ((*param_1 == 0x2e && (SVar2 = GetKeyState(0x10), -1 < SVar2)))))) {
      iVar3 = FUN_009962d0();
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_009962d0();
        cVar1 = (**(code **)(*piVar4 + 0x4c))();
        if (cVar1 != '\0') {
          cVar1 = (char)*param_1;
          if (cVar1 == '\"') {
            return;
          }
          if (cVar1 == -0x59) {
            return;
          }
          if (cVar1 == -0x5c) {
            return;
          }
          if (cVar1 == -0x5d) {
            return;
          }
          if (cVar1 == '@') {
            return;
          }
          if (cVar1 == '{') {
            return;
          }
          if (cVar1 == '}') {
            return;
          }
        }
      }
      pcVar5 = *(char **)(in_ECX + 0x194);
      if (pcVar5 != (char *)0x0) {
        do {
          if (*pcVar5 == (char)*param_1) {
            return;
          }
          pcVar5 = *(char **)(pcVar5 + 8);
        } while (pcVar5 != (char *)0x0);
      }
      if (*param_1 != 9) {
        (**(code **)(*(int *)(in_ECX + 0x54) + 0x50))(*param_1,param_1[1]);
        *(undefined1 *)(in_ECX + 400) = 1;
        FUN_009b6400(in_ECX);
        *(char *)(param_1 + 6) = '\x01';
      }
    }
  }
  return;
}

