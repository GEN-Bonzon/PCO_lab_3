//    ___  _________    ___  ___  ___  ___  //
//   / _ \/ ___/ __ \  |_  |/ _ \|_  |/ _ \ //
//  / ___/ /__/ /_/ / / __// // / __// // / //
// /_/   \___/\____/ /____/\___/____/\___/  //
//                                          //
// Auteurs : Jérôme Arn, Prénom Nom

#include "pcocablecar.h"
#include <pcosynchro/pcothread.h>

#include <QDebug>
#include <QRandomGenerator>
constexpr unsigned int MIN_SECONDS_DELAY = 1;
constexpr unsigned int MAX_SECONDS_DELAY = 5;
constexpr unsigned int SECOND_IN_MICROSECONDS = 1000000;

// A vous de remplir les méthodes ci-dessous

PcoCableCar::PcoCableCar(const unsigned int capacity) : capacity(capacity)
{

}

PcoCableCar::~PcoCableCar()
{

}

void PcoCableCar::waitForCableCar(int id)
{
    qDebug() << "Skieur" << id << "attend la cabine";
}

void PcoCableCar::waitInsideCableCar(int id)
{
    qDebug() << "Skieur" << id << "attend dans la cabine";
}

void PcoCableCar::goIn(int id)
{
    qDebug() << "Skieur" << id << "va dans la cabine";
}

void PcoCableCar::goOut(int id)
{
    qDebug() << "Skieur" << id << "sort de la cabine";
}

bool PcoCableCar::isInService()
{
    return inService;
}

void PcoCableCar::endService()
{
    inService = false;
    //TODO release les threads en attente de la cabine
}

void PcoCableCar::goUp()
{
    qDebug() << "Le télécabine monte";
    PcoThread::usleep((MIN_SECONDS_DELAY + QRandomGenerator::system()->bounded(MAX_SECONDS_DELAY + 1)) * SECOND_IN_MICROSECONDS);
}

void PcoCableCar::goDown()
{
    qDebug() << "Le télécabine descend";
    PcoThread::usleep((MIN_SECONDS_DELAY + QRandomGenerator::system()->bounded(MAX_SECONDS_DELAY + 1)) * SECOND_IN_MICROSECONDS);
}

void PcoCableCar::loadSkiers()
{

}

void PcoCableCar::unloadSkiers()
{

}