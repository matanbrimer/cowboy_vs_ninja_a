#include "doctest.h"
#include "sources/Character.hpp"
#include "sources/Cowboy.hpp"
#include "sources/OldNinja.hpp"
#include "sources/Point.hpp"
#include "sources/smartTeam.hpp"
#include "sources/TrainedNinja.hpp"
#include "sources/YoungNinja.hpp"

using namespace ariel;

TEST_CASE("CharacterTest, DefaultConstructor") {
    Character c;

    c.setName("MATAN");
    CHECK_EQ(c.getName(), "MATAN");
    CHECK_EQ(c.isAlive(), true);
}

TEST_CASE("CharacterTest, HitMethod && isAlive") {
    Character c;
    c.hit(6);
    CHECK_EQ(c.isAlive(), false);
}

TEST_CASE("CharacterTest, DistanceMethod") {
    Character c1;
    Character c2;
    c2.setX(3);
    c2.setY(4);
    CHECK_EQ(c1.distance(&c2), 5.0);
}

TEST_CASE("CowboyTest, DefaultConstructor && hasboolets") {
    Cowboy c("Nofar", Point(1,1));
    CHECK_EQ(c.getName(), "Nofar");

    CHECK_EQ(c.hasboolets(), true);
}



TEST_CASE("CowboyTest, ShootMethod") {
    Cowboy c1("Matan", Point(1,1));
    Character c2;
    c1.shoot(&c2);
    CHECK_EQ(c2.isAlive(), false);
}

TEST_CASE("OldNinjaTest, SlashMethod") {
    OldNinja n("Ninja", Point(2,2));
    Character c;
    c.setX(1.5);
    c.setY(1.5);
    n.slash(&c);
    CHECK_EQ(c.isAlive(), false);
}

TEST_CASE("SmartTeamTest, AddMethod") {
    Character c;
    Team team(&c);

    CHECK_EQ(team.stillAlive(), 1);
}

TEST_CASE("SmartTeamTest, AttackMethod") {
    Character c1;
    Character c2;
    smartTeam team1(&c1);
    smartTeam team2(&c2);
    Character c3;
    Character c4;
    team1.add(&c3);
    team2.add(&c4);
    team1.attack(&team2);
    CHECK_EQ(team2.stillAlive(), 0);
}

TEST_CASE("PointTest, SettersAndGetters") {
    Point p;
    p.setX(5.0);
    p.setY(10.0);
    CHECK_EQ(p.getX(), 5.0);
    CHECK_EQ(p.getY(), 10.0);
}

TEST_CASE("PointTest, Distance") {
    Point p1(5.0, 10.0);
    Point p2(10.0, 10.0);
    CHECK_EQ(p1.distance(p2), 5.0);
}

  TEST_CASE("hit") 
    {
        Point location(0, 0);
        int life = 100;
        string name = "DANI";
        Character test;
        int damage = 85;
        test.hit(damage);
        CHECK(test.isAlive() == true);
        
    }

    TEST_CASE("shoot , hasboolets , reload")
    {
        Point point1(2, 8);
        Point point2(5, 8);
        Cowboy player1("dani",point1);
        Cowboy player2("avi",point2);
        CHECK(player1.hasboolets());
        while (player1.hasboolets())
        {
            player1.shoot(&player2);    
        }
        CHECK_FALSE(player1.hasboolets());
        player1.reload();
        CHECK(player1.hasboolets());
    }




    TEST_CASE("Test reload") {
        Point p1(0,0);
        Cowboy cowboy("fredi", p1);
        OldNinja ssusi("yaki",p1);
        CHECK(cowboy.hasboolets());
        for (size_t i = 0; i < 6; i++){
            cowboy.shoot(&ssusi);
        }
        CHECK_FALSE(cowboy.hasboolets());
        cowboy.reload();
        CHECK(cowboy.hasboolets());
    }
