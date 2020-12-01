// RIP Ilan 2020-2020

#pragma once
#include <memory>
#include <vector>
#include <string>
#include <iostream>

/*
    A pure abstract class that all items in game world inherity from. 
    This needs to be a pure abstract class that cannot be instantiated.
*/
class Object
{
public:
    /* 
        Pure Virtual Function, std get function that returns a bool 
        indicating if this object can be sat on. 
    */
    virtual bool getIndicatorSit() const = 0;
    
    /* 
        Pure Virtual Function, std get function that returns a bool 
        indicating if this object can be destroyed. 
    */
   virtual bool getIndicatorDestroy() const = 0;
    
    /* 
        Pure Virtual Function, performs a sit, if object can't be sat
        on, will throw an exception. Exception must have overloaded .what() 
        method. 
    */
   virtual void sit() = 0;
    
    /* 
        Pure Virtual Function, performs a sit, if object can't be destroyed,
        will throw an exception. Exception must have overloaded .what() 
        method. 
    */
   virtual void destroy() = 0;
};

/* Is an object that can be sat in, and be destroyed */
class Chair : Object
{
public:
    Chair() : indicator_sit(true), indicator_destroy(true) {}
    bool getIndicatorSit() const override { return indicator_sit; } 
    bool getIndicatorDestroy() const override { return indicator_destroy; } 
    void sit() override;
    void destroy() override;

private:
    bool indicator_sit;
    bool indicator_destroy;
    int weight;
};

/* Is an object that cannot be sat in, or be destroyed */
class Statue : Object
{
public:
    Statue() : indicator_sit(false), indicator_destroy(false) {}
    bool getIndicatorSit() const override { return indicator_sit; } 
    bool getIndicatorDestroy() const override { return indicator_destroy; } 
    void sit() override;
    void destroy() override;

private:
    bool indicator_sit;
    bool indicator_destroy;
    int weight;
};




