// FUN_009a4ac0 @ 009a4ac0 body=[[009a4ac0, 009a4b38]]


void FUN_009a4ac0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  do {
    if (param_2 == param_3) {
LAB_009a4aed:
      piVar2 = param_2;
      if (param_2 != param_3) {
        while (piVar2 = piVar2 + 1, piVar2 != param_3) {
          piVar1 = (int *)*piVar2;
          if (*(char *)((int)piVar1 + 0x3a) == '\0') {
            *param_2 = (int)piVar1;
            param_2 = param_2 + 1;
          }
          else {
            (**(code **)(*piVar1 + 0x14))(1);
          }
        }
        *param_1 = param_2;
        return;
      }
      *param_1 = param_2;
      return;
    }
    if (*(char *)(*param_2 + 0x3a) != '\0') {
      (**(code **)(*(int *)*param_2 + 0x14))(1);
      goto LAB_009a4aed;
    }
    param_2 = param_2 + 1;
  } while( true );
}

