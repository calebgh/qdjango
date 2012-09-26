/*
 * Copyright (C) 2010-2012 Jeremy Lainé
 * Contact: http://code.google.com/p/qdjango/
 *
 * This file is part of the QDjango Library.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

#include <QObject>

class QDjangoHttpRequest;
class QDjangoHttpResponse;
class QDjangoHttpServer;
class QDjangoUrlResolver;

/** Test QDjangoServer class.
 */
class TestHttp : public QObject
{
    Q_OBJECT

private slots:
    void cleanupTestCase();
    void initTestCase();
    void testGet_data();
    void testGet();
    void testPost_data();
    void testPost();

    QDjangoHttpResponse* _q_index(const QDjangoHttpRequest &request);
    QDjangoHttpResponse* _q_error(const QDjangoHttpRequest &request);

private:
    QDjangoHttpServer *httpServer;
};

class tst_QDjangoUrlHelper : public QObject
{
    Q_OBJECT

private slots:
    QDjangoHttpResponse* _q_index(const QDjangoHttpRequest &request);
    QDjangoHttpResponse* _q_test(const QDjangoHttpRequest &request);
};

class tst_QDjangoUrlResolver : public QObject
{
    Q_OBJECT

private slots:
    void cleanupTestCase();
    void initTestCase();
    void testRespond_data();
    void testRespond();
    void testReverse_data();
    void testReverse();

    QDjangoHttpResponse* _q_index(const QDjangoHttpRequest &request);
    QDjangoHttpResponse* _q_noArgs(const QDjangoHttpRequest &request);
    QDjangoHttpResponse* _q_oneArg(const QDjangoHttpRequest &request, const QString &id);
    QDjangoHttpResponse* _q_twoArgs(const QDjangoHttpRequest &request, const QString &id, const QString &action);

private:
    tst_QDjangoUrlHelper *urlHelper;
    QDjangoUrlResolver *urlResolver;
    QDjangoUrlResolver *urlSub;
};
