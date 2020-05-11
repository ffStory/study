//
//  sort.cpp
//  Algorithms
//
//  Created by FD on 2020/5/11.
//  Copyright © 2020 FD. All rights reserved.
//

#include "sort.hpp"
#include <iostream>

//冒泡排序
//两两比较，右侧为有序
void bubbleSort(int array[], int len){
    for (int i = 0; i < len - 1; ++i){
        for (int j = 0; j < len - 1 - i; ++j){
            if (array[j + 1] < array[j]){
                std::swap(array[j+1], array[j]);
            }
        }
    }
}

//----------------------------------------------------

//选择排序
//左侧有序，右侧无序。从右侧无序数组中选择最值，添加到左侧有序数组中
void selectSort(int array[], int len){
    for (int i = 0; i < len - 1; ++i){
        int min = i;
        for (int j = i + 1; j < len; ++j){
            if (array[j] < array[min]){
                min = j;
            }
        }
        std::swap(array[i], array[min]);
    }
}

//----------------------------------------------------

//插入排序
//左侧有序，右侧无序。把右侧无序数组第一个值，插入到左侧有序数组的合适位置。且该位置右侧数据依次右移
void insertSort(int array[], int len){
    for (int i = 1; i < len; ++i){
        int temp = array[i];
        int j = i;
        while (j > 0 && array[j-1] > temp) {
            array[j] = array[j-1];
            j--;
        }
        array[j] = temp;
    }
}

//----------------------------------------------------

//快速排序
//找到一个基准点p，把数组分为两部分，左侧都小于，右侧都大于。
//每一部分，递归上述操作
//难点是找出基准点

//找基准
int getPivot(int array[], int left, int right){
    int pivot = left;
    int index = pivot + 1;
    
    for (int i = index; i <= right; ++i){
        if (array[i] < array[pivot]){
            std::swap(array[i], array[index]);
            index++;
        }
    }
    
    std::swap(array[pivot], array[index  -1]);
    
    return index - 1;
}

void quickSort(int array[], int left, int right){
    if (left > right){
        return;
    }
    int pivot = getPivot(array, left, right);
    quickSort(array, left, pivot-1);
    quickSort(array, pivot+1, right);
}

//----------------------------------------------------

//堆排序
//分两部分：
//1完全二叉树构建堆数据（此时数组数据不是有序的)：子节点和父节点j比较，交换。
//2j交换数据，有序输出；把堆顶最值放到数组最后
void maxHeapify(int arr[], int start, int end) {
    // 建立父節點指標和子節點指標
    int dad = start;
    int son = dad * 2 + 1; //左孩子
    if(son <= end) { //保证不越界
        if (son + 1 <= end && arr[son] < arr[son + 1]) //找到较大孩子节点（左右孩子比较）
            son++;
        //和父节点比较，保证父节点是最值
        if (arr[dad] > arr[son])
            return;
        else {
            std::swap(arr[dad], arr[son]);
            dad = son;
            son = dad * 2 + 1;
            maxHeapify(arr, dad, end);
        }
    }
}

void heapSort(int arr[], int len) {
    // 初始化堆。从最右侧往上（完全二叉树）。
    for (int i = len/2 - 1; i >= 0; i--){
        maxHeapify(arr, i, len - 1);
    }
    
    // 依次把堆顶元素和末尾交换，且重新构建堆。（堆顶永远是最值）
    for (int i = len - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        maxHeapify(arr, 0, i - 1);
    }
}
