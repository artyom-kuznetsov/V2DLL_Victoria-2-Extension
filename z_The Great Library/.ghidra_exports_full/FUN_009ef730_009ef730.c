// FUN_009ef730 @ 009ef730 body=[[009ef730, 009ef798]]


void FUN_009ef730(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0) {
    param_2 = *(int *)(in_ECX + 0x11c);
  }
  FUN_00408ed0(param_1,0,0xffffffff);
  if (param_2 != 0) {
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0xec))
              (*(undefined4 *)(in_ECX + 0x94),param_1,param_2,
               *(undefined4 *)(*(int *)(in_ECX + 0x150) + 0x288));
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0xf8))();
  }
  return;
}

